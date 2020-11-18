//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/DVTAnnotation.h>

@class DVTMutableRangeArray, DVTTextAnnotationAccessibilityProxyItem, DVTTextDocumentLocation, NSArray, NSImage, NSMutableArray, NSMutableDictionary, NSString;
@protocol DVTSourceLandmarkItemContainer><DVTLineRangeCharacterRangeConverter, DVTSourceLandmarkItemProtocol, DVTTextAnnotationDelegate, DVTTextAnnotationDisplayDelegate;

@interface DVTTextAnnotation : DVTAnnotation
{
    NSMutableArray *_layoutManagers;
    NSMutableDictionary *_themesByState;
    id <DVTTextAnnotationDelegate> _delegate;
    DVTTextDocumentLocation *_location;
    NSArray *_secondaryLocations;
    DVTMutableRangeArray *_highlightedRanges;
    struct _NSRange _paragraphRange;
    unsigned long long _paragraphHash;
    NSImage *_sidebarMarkerImage;
    double _sidebarMarkerVerticalPadding;
    double _sidebarMarkerHorizontalOffset;
    double _sidebarMarkerOpacity;
    unsigned long long _highlightSidebarStyle;
    unsigned long long _severity;
    struct {
        unsigned int drawsSidebarMarker:1;
        unsigned int sidebarMarkerAlignment:4;
        unsigned int wantsDisplayOverLineNumber:1;
        unsigned int wantsReplaceLineNumber:1;
        unsigned int wantsInvertedLineNumber:1;
        unsigned int shouldDrawTemplateInverted:1;
        unsigned int lineHighlightVisible:1;
        unsigned int highlightedRangesVisible:1;
        unsigned int userDraggable:1;
        unsigned int userRemovable:1;
        unsigned int isParagraphEdited:1;
        unsigned int usesFirstLineFragmentMode:1;
        unsigned int hasCaretRanges:1;
        unsigned int hasCaretRangesIsValid:1;
    } _taFlags;
    BOOL _lazyInvalidation;
    int _annotationStackPolicy;
    DVTTextAnnotationAccessibilityProxyItem *_accessibilityProxy;
    id <DVTTextAnnotationDisplayDelegate> _displayDelegate;
    NSImage *_sidebarMarkerImageBorderMask;
    NSString *_toolTip;
    id <DVTSourceLandmarkItemContainer><DVTLineRangeCharacterRangeConverter> _landmarkProvider;
    unsigned long long _scrollbarMarkerType;
    struct CGRect _lastSidebarMarkerRect;
}

+ (void)drawLineHighlightForAnnotations:(id)arg1 highlightRanges:(BOOL)arg2 textView:(id)arg3 getParaRectBlock:(CDUnknownBlockType)arg4;
+ (void)sortAndFilterSupressedAnnotationsInArray:(id)arg1 usingComparisonSelector:(SEL)arg2;
+ (id)logAspect;
+ (void)initialize;
- (void).cxx_destruct;
@property BOOL lazyInvalidation; // @synthesize lazyInvalidation=_lazyInvalidation;
@property(readonly) struct CGRect lastSidebarMarkerRect; // @synthesize lastSidebarMarkerRect=_lastSidebarMarkerRect;
@property unsigned long long scrollbarMarkerType; // @synthesize scrollbarMarkerType=_scrollbarMarkerType;
@property(nonatomic) unsigned long long highlightSidebarStyle; // @synthesize highlightSidebarStyle=_highlightSidebarStyle;
@property __weak id <DVTSourceLandmarkItemContainer><DVTLineRangeCharacterRangeConverter> landmarkProvider; // @synthesize landmarkProvider=_landmarkProvider;
@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
@property(nonatomic) double sidebarMarkerOpacity; // @synthesize sidebarMarkerOpacity=_sidebarMarkerOpacity;
@property(nonatomic) double sidebarMarkerHorizontalOffset; // @synthesize sidebarMarkerHorizontalOffset=_sidebarMarkerHorizontalOffset;
@property double sidebarMarkerVerticalPadding; // @synthesize sidebarMarkerVerticalPadding=_sidebarMarkerVerticalPadding;
@property(retain, nonatomic) NSImage *sidebarMarkerImageBorderMask; // @synthesize sidebarMarkerImageBorderMask=_sidebarMarkerImageBorderMask;
@property(retain, nonatomic) NSImage *sidebarMarkerImage; // @synthesize sidebarMarkerImage=_sidebarMarkerImage;
@property __weak id <DVTTextAnnotationDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property(retain) id <DVTTextAnnotationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) DVTTextAnnotationAccessibilityProxyItem *accessibilityProxy; // @synthesize accessibilityProxy=_accessibilityProxy;
@property int annotationStackPolicy; // @synthesize annotationStackPolicy=_annotationStackPolicy;
@property unsigned long long severity; // @synthesize severity=_severity;
@property(readonly) struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
@property(retain, nonatomic) DVTTextDocumentLocation *location; // @synthesize location=_location;
- (id)annotationDisplayDescription;
- (BOOL)isFocusedInTextView:(id)arg1;
- (void)adjustParagraphIndexBy:(long long)arg1 lengthBy:(long long)arg2;
- (id)description;
- (void)fontAndColorThemeChanged:(id)arg1;
- (void)invalidateDisplayAndLayoutIfNeeded:(BOOL)arg1;
- (void)setNeedsInvalidate;
- (long long)comparePrecedenceAndLayering:(id)arg1;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (id)currentStateInTextView:(id)arg1;
- (void)drawHighlightedRangesInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsHighlightedRanges;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsLineHighlight;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)annotationWillDrawInTextView:(id)arg1;
- (long long)compareParagraphRange:(id)arg1;
- (void)deriveParagraphRangeFromLocation;
@property(getter=isUserRemovable) BOOL userRemovable;
@property(getter=isUserDraggable) BOOL userDraggable;
@property(readonly) BOOL hasCaretRanges;
- (void)synchronizeParagraphHash;
- (void)synchronizeHighlightedRangesWithLocationsForTextStorage:(id)arg1;
- (void)removeAllHighlightedRanges;
- (void)removeHighlightedRange:(struct _NSRange)arg1;
- (void)removeHighlightedRangeAtIndex:(long long)arg1;
- (void)insertHighlightedRange:(struct _NSRange)arg1 atIndex:(long long)arg2;
- (void)addHighlightedRange:(struct _NSRange)arg1;
- (void)removeObjectFromHighlightedRangesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inHighlightedRangesAtIndex:(unsigned long long)arg2;
@property(copy) NSArray *highlightedRanges;
@property(getter=isHighlightedRangesVisible) BOOL highlightedRangesVisible;
- (id)_highlightedRanges;
- (BOOL)lineHighlightIncludesLineSpacing;
@property(getter=isLineHighlightVisible) BOOL lineHighlightVisible;
@property(readonly) id <DVTSourceLandmarkItemProtocol> enclosingLandmarkItem;
@property BOOL shouldDrawTemplateInverted;
@property BOOL wantsInvertedLineNumber;
@property BOOL wantsReplaceLineNumber;
@property BOOL wantsDisplayOverLineNumber;
- (void)setSidebarMarkerTopMargin:(double)arg1;
@property unsigned long long sidebarMarkerAlignment;
@property BOOL drawsSidebarMarker;
- (id)sidebarMarkerImageForSize:(struct CGSize)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setVisibleWithoutAdditionalLayout:(BOOL)arg1;
- (void)setTheme:(id)arg1 forState:(id)arg2;
- (id)themeForState:(id)arg1;
- (void)resolveLocationIfNeededForLayoutManager:(id)arg1;
@property(readonly) BOOL wantsMergeAnnotations;
@property BOOL usesFirstLineFragmentMode;
@property(getter=isParagraphEdited) BOOL paragraphEdited;
@property(copy) NSArray *secondaryLocations;
- (void)removeLayoutManager:(id)arg1;
- (void)addLayoutManager:(id)arg1;
@property(readonly) NSArray *layoutManagers;
- (void)dealloc;
- (id)init;

@end

