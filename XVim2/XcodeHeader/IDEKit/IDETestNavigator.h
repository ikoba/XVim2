//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/IDETestNavigatorFilterConsumer-Protocol.h>
#import <IDEKit/IDETestingSelection-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTScopeBarView, IDENavigatorOutlineView, IDESelection, IDETestNavigatorOutlineViewDelegate, IDETestNavigatorRestorableNodeState, IDEWorkspaceTabController, NSDictionary, NSLayoutConstraint, NSMutableArray, NSMutableSet, NSPopUpButton, NSString, NSTextField;
@protocol IDETestCollection, IDETestNavigatorFilterProducer;

@interface IDETestNavigator : IDEOutlineBasedNavigator <IDETestNavigatorFilterConsumer, NSOutlineViewDelegate, NSMenuDelegate, IDETestingSelection, DVTOutlineViewDelegate>
{
    NSMutableSet *_expandedItems;
    BOOL _mouseIsWithinStatusRect;
    long long _rowForWhichRunWasPressed;
    BOOL _isRunningTests;
    BOOL _showSchemeTestablesOnly;
    BOOL _restoringState;
    long long _loadingProgress;
    NSTextField *_testPlanLabel;
    DVTScopeBarView *_scopeBar;
    IDETestNavigatorOutlineViewDelegate *_outlineViewDelegate;
    NSDictionary *_unfilteredExpandedItemNames;
    NSDictionary *_unfilteredCollapsedItemNames;
    NSString *_visibleRectStringBeforeFiltering;
    NSMutableSet *_collapsedItems;
    id <IDETestNavigatorFilterProducer> _filterDelegate;
    NSPopUpButton *_activeTestPlanPopUpButton;
    NSLayoutConstraint *_activeTestPlanPopUpButtonWidthConstraint;
    NSLayoutConstraint *_scopeBarHeightConstraint;
    NSMutableArray *_stateChangeObservingTokens;
    NSDictionary *_previouslyRestoredStateDictionary;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSDictionary *previouslyRestoredStateDictionary; // @synthesize previouslyRestoredStateDictionary=_previouslyRestoredStateDictionary;
@property(retain) NSMutableArray *stateChangeObservingTokens; // @synthesize stateChangeObservingTokens=_stateChangeObservingTokens;
@property(retain) NSLayoutConstraint *scopeBarHeightConstraint; // @synthesize scopeBarHeightConstraint=_scopeBarHeightConstraint;
@property(retain) NSLayoutConstraint *activeTestPlanPopUpButtonWidthConstraint; // @synthesize activeTestPlanPopUpButtonWidthConstraint=_activeTestPlanPopUpButtonWidthConstraint;
@property(retain) NSPopUpButton *activeTestPlanPopUpButton; // @synthesize activeTestPlanPopUpButton=_activeTestPlanPopUpButton;
@property(nonatomic) BOOL restoringState; // @synthesize restoringState=_restoringState;
@property(nonatomic) BOOL showSchemeTestablesOnly; // @synthesize showSchemeTestablesOnly=_showSchemeTestablesOnly;
@property(retain) id <IDETestNavigatorFilterProducer> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
@property(readonly, nonatomic) NSMutableSet *collapsedItems; // @synthesize collapsedItems=_collapsedItems;
@property(retain, nonatomic) NSString *visibleRectStringBeforeFiltering; // @synthesize visibleRectStringBeforeFiltering=_visibleRectStringBeforeFiltering;
@property(copy, nonatomic) NSDictionary *unfilteredCollapsedItemNames; // @synthesize unfilteredCollapsedItemNames=_unfilteredCollapsedItemNames;
@property(copy, nonatomic) NSDictionary *unfilteredExpandedItemNames; // @synthesize unfilteredExpandedItemNames=_unfilteredExpandedItemNames;
@property(readonly) IDETestNavigatorOutlineViewDelegate *outlineViewDelegate; // @synthesize outlineViewDelegate=_outlineViewDelegate;
@property BOOL isRunningTests; // @synthesize isRunningTests=_isRunningTests;
@property(retain) DVTScopeBarView *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(retain) NSTextField *testPlanLabel; // @synthesize testPlanLabel=_testPlanLabel;
@property(readonly) long long loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (void)_updateFilterButtonMenu:(id)arg1;
- (id)selectedTestable;
- (void)menuNeedsUpdate:(id)arg1;
- (id)_contextForTestingHelper;
@property(readonly) NSString *selectionUIContext;
@property(readonly) id <IDETestCollection> selectedTests;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)_itemHasSubTests:(id)arg1;
- (void)_handleRunTestButtonPressed:(id)arg1;
- (void)revealTestsAndTestables:(id)arg1;
- (void)_scrollOutlineViewUsingRectString:(id)arg1;
@property(readonly) NSString *visibleRectString;
- (void)_expandAllEnabledTestables;
- (void)_refreshOutlineViewRowsUI;
- (void)_updateEmptyContentPlaceholdersIfNeeded;
- (void)_collapseItems:(id)arg1 inOutlineView:(id)arg2;
- (void)_expandItems:(id)arg1 inOutlineView:(id)arg2;
- (void)_restoreNodesAndScrollOutlineViewUsingState:(id)arg1;
- (void)_refreshUIToApplyFilterChange;
- (void)registerForTestMonitoringOnModel:(id)arg1;
- (void)_setupOutlineViewDelegate;
- (void)_setupLoadingObservingToken:(id)arg1;
- (void)_setupStateChangeObservingTokens;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)domainIdentifier;
- (void)updatedFilterAvailable:(id)arg1;
- (void)updatedFilterWillBeAvailable;
- (void)_applySchemeFilter;
- (void)setFilter:(id)arg1;
- (id)filterDefinitionIdentifier;
@property(readonly) BOOL isAnyFilterEnabled;
- (id)_localizedString:(id)arg1;
- (void)manageTestPlansItemSelected:(id)arg1;
- (void)newTestPlanItemSelected:(id)arg1;
- (void)editTestPlanItemSelected:(id)arg1;
- (void)changeActiveTestPlan:(id)arg1;
- (void)rebuildActiveTestPlanPopUpButtonMenu;
- (id)menuItemUsingLocalizedStringKey:(id)arg1 value:(id)arg2 action:(SEL)arg3;
- (id)_selectedItemsAsNameTree;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (id)_itemsBeforeFilteringAsNameTreeIn:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) IDETestNavigatorRestorableNodeState *unfilteredExpandedAndCollapsedNodes;
- (void)saveExpandedAndCollapsedItemNamesForStateRestoration;
- (BOOL)isLoadingComplete;
- (void)configureStateSavingObservers;

// Remaining properties
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSMutableSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isValid;
@property(retain) NSMutableSet *mutableCollapsedItems; // @dynamic mutableCollapsedItems;
@property(retain) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(retain) IDENavigatorOutlineView *outlineView; // @dynamic outlineView;
@property(readonly, copy) IDESelection *outputSelection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;

@end

