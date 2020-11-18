//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPathCell.h>

#import <DVTKit/DVTFilteringMenuDelegate-Protocol.h>
#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/NSDraggingSource-Protocol.h>
#import <DVTKit/NSMenuDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTPathCellItemObserver, DVTPathComponentCell, DVTStackBacktrace, NSMenu, NSMutableArray, NSMutableSet, NSString, _TtC6DVTKit30DVTNavigationPopoverController;

@interface DVTPathCell : NSPathCell <DVTFilteringMenuDelegate, NSMenuDelegate, NSDraggingSource, DVTInvalidation>
{
    struct CGSize _cachedSizeWanted;
    NSMenu *_trackingMenu;
    DVTPathComponentCell *_clickedDVTPathComponentCell;
    DVTPathCellItemObserver *_itemObserver;
    NSMutableArray *_itemsObservedForChildItems;
    NSMutableSet *_cellsWithDirtyImages;
    NSMutableSet *_cellsWithDirtyNames;
    DVTDelayedInvocation *_dirtyCellInvocation;
    struct {
        unsigned int _lastComponentFillsWidth:1;
        unsigned int _delegateRespondsToWillDisplayChildrenWithMostProximateChildItem:1;
        unsigned int _delegateRespondsToWillDismissMenuDisplayingItems:1;
        unsigned int _delegateRespondsToShouldSeparateDisplayOfChildItemsForItem:1;
        unsigned int _delegateRespondsToChildItemsForItem:1;
        unsigned int _delegateRespondsToShouldPopUpMenuForPathComponentCell:1;
        unsigned int _delegateRespondsToBeginDrag:1;
        unsigned int _delegateRespondsToTitleForPathComponentCellAtIndex:1;
        unsigned int _delegateRespondsToPerformAlternateReveal:1;
        unsigned int _delegateProvidesMenuItems:1;
        unsigned int _delegateProvidesAccessibilityDescriptions:1;
        unsigned int _delegateProvidesToolTips:1;
        unsigned int _delegateResponseToTextAlignmentForTitleOfPathComponentCellAtIndex:1;
        unsigned int _delegateRespondsToShouldDisplayChildrenForItem:1;
        unsigned int _delegateRespondsToShouldHandleClickEventForPathComponentCell:1;
        unsigned int _delegateRespondsToChildItemDataSourceForItem:1;
    } _DVTPathCellFlags;
    BOOL _needsToUpdateComponentCells;
    BOOL __delegateProvidesMenuItems;
    int _gradientStyle;
    long long _navigationPresentationStyle;
    _TtC6DVTKit30DVTNavigationPopoverController *_currentNavigationPopoverController;
    unsigned long long _preferredNavigationPopoverEdge;
}

+ (void)_openURLInFinder:(id)arg1;
+ (void)populatePopUpMenu:(id)arg1 forShowingProxyForFileURL:(id)arg2;
+ (void)initialize;
+ (unsigned long long)defaultFocusRingType;
+ (double)navigationPopoverDefaultWidth;
+ (double)navigationPopoverDefaultCapacity;
+ (id)navigationPopoverDefaultTitle;
+ (id)navigationPopoverIdentifier;
- (void).cxx_destruct;
@property(readonly) BOOL _delegateProvidesMenuItems; // @synthesize _delegateProvidesMenuItems=__delegateProvidesMenuItems;
@property unsigned long long preferredNavigationPopoverEdge; // @synthesize preferredNavigationPopoverEdge=_preferredNavigationPopoverEdge;
@property(retain, nonatomic) _TtC6DVTKit30DVTNavigationPopoverController *currentNavigationPopoverController; // @synthesize currentNavigationPopoverController=_currentNavigationPopoverController;
@property(nonatomic) int gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (id)dvt_accessibilityPopUpMenuParent:(id)arg1;
- (id)dvt_accessibilityChildMenuForChild:(id)arg1;
- (void)dvt_accessibilityPerformPressForChild:(id)arg1;
- (id)dvt_accessibilitySizeOfChild:(id)arg1;
- (id)dvt_accessibilityPositionOfChild:(id)arg1;
- (struct CGRect)dvt_accessibilityScreenRectForPathComponent:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)dvt_accessibilityObjectForComponentCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)toolTipManager:(id)arg1 toolTipForView:(id)arg2 location:(struct CGPoint)arg3 tipSourceRect:(struct CGRect *)arg4;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)_handleClickInComponentCell:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 event:(id)arg5;
- (BOOL)_trackMouseInComponentCell:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 event:(id)arg5;
- (BOOL)acceptsFirstResponder;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)_performDragInComponentCell:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 event:(id)arg4;
- (void)filterItems:(id)arg1 inMenu:(id)arg2 forSearchString:(id)arg3;
- (id)titleForFilteringMenuItem:(id)arg1;
- (BOOL)popUpMenuForComponentCell:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
@property(readonly) BOOL _delegateRespondsToChildItemDataSourceForItem;
- (void)_handlePressureClickForCell:(id)arg1;
- (BOOL)_revealInPopover:(id)arg1 ofCell:(id)arg2 fromFrame:(struct CGRect)arg3 ofView:(id)arg4;
- (BOOL)_representsDocumentInteriorContent:(id)arg1;
- (id)_fileURLForItem:(id)arg1;
- (void)_populatePopUpMenuWithPath:(id)arg1 withFileURL:(id)arg2;
- (void)_populatePopUpMenu:(id)arg1 withItems:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)cancelMenuTracking;
- (id)_menuItemWithItem:(id)arg1 additionalItems:(id *)arg2 currentGroupIdentifier:(id *)arg3;
- (id)_menuItemWithItem:(id)arg1 additionalItems:(id *)arg2 currentGroupIdentifier:(id *)arg3 indentationLevel:(long long)arg4;
- (void)_setupSubmenuForMenuItem:(id)arg1;
- (void)_selectItem:(id)arg1;
- (BOOL)_delegate_shouldDisplayChildrenForItem:(id)arg1;
- (BOOL)_delegate_shouldMergeChildItemsForItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingChildItemsOfItems:(id)arg1;
- (void)stopObservingChildItemsOfAllItems;
- (void)startObservingChildItemsOfMenuItems:(id)arg1;
- (id)_peerItemsForComponentCell:(id)arg1;
- (BOOL)_isItem:(id)arg1 visibleFrom:(id)arg2;
- (id)childItemsForItem:(id)arg1;
- (void)invalidateNameForPathComponentCell:(id)arg1;
- (void)invalidateImageForPathComponentCell:(id)arg1;
- (void)setNeedsDisplayForCell:(id)arg1;
- (id)pathComponentCellForRepresentedObject:(id)arg1;
- (void)updateComponentCells;
- (struct CGSize)sizeWantedForFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_componentCellsForCurrentlyObservedItems;
- (void)_updateDirtyCells:(id)arg1;
- (id)lineageForItem:(id)arg1 rootItems:(id)arg2;
- (id)_componentCellsFromItems:(id)arg1;
- (long long)_delegate_textAlignmentForTitleOfPathComponentCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_delegate_titleForPathComponentCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_noSelectionComponentCell;
- (id)_componentCellWithRepresentedObject:(id)arg1;
- (void)invalidateComponentCells;
- (struct CGRect)grabRectInView:(id)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)pathComponentCellAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (struct CGRect)rectOfPathComponentCell:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
@property BOOL lastComponentFillsWidth;
- (void)setFont:(id)arg1;
- (void)primitiveInvalidate;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)_DVTPathCellCommonInit;
@property long long navigationPresentationStyle; // @synthesize navigationPresentationStyle=_navigationPresentationStyle;
- (void)handleNavigationPopoverDisplayWithItems:(id)arg1 parentItem:(id)arg2 ofCell:(id)arg3 inView:(id)arg4 offset:(struct CGPoint)arg5;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

