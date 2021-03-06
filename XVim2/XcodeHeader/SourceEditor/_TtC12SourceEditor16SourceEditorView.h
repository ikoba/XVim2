//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>
/*
#import <SourceEditor/NSChangeSpelling-Protocol.h>
#import <SourceEditor/NSIgnoreMisspelledWords-Protocol.h>
#import <SourceEditor/NSServicesMenuRequestor-Protocol.h>
#import <SourceEditor/NSTextInputClient-Protocol.h>
#import <SourceEditor/NSUserInterfaceValidations-Protocol.h>
*/
#import <AppKit/AppKit.h>
#import <SourceEditor/_TtP12SourceEditor34SourceEditorViewMissingKeyBindings_-Protocol.h>

@class MISSING_TYPE, NSString, SourceEditorScrollView, _TtC12SourceEditor23SourceEditorContentView;

@interface _TtC12SourceEditor16SourceEditorView : NSView <NSTextInputClient, _TtP12SourceEditor34SourceEditorViewMissingKeyBindings_, NSUserInterfaceValidations, NSChangeSpelling, NSIgnoreMisspelledWords, NSServicesMenuRequestor>
{
    MISSING_TYPE *delegate;
    MISSING_TYPE *contentViewOffset;
    MISSING_TYPE *layoutManager;
    MISSING_TYPE *contentView;
    MISSING_TYPE *editAssistant;
    MISSING_TYPE *foldingController;
    MISSING_TYPE *placeholderVisualization;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *boundsChangeObserver;
    MISSING_TYPE *frameChangeObserver;
    MISSING_TYPE *undoObserver;
    MISSING_TYPE *redoObserver;
    MISSING_TYPE *$__lazy_storage_$_commandInterface;
    MISSING_TYPE *pasteboard;
    MISSING_TYPE *contentViewWidthConstraint;
    MISSING_TYPE *contentViewWidthLimitConstraint;
    MISSING_TYPE *contentViewHeightConstraint;
    MISSING_TYPE *scrollView;
    MISSING_TYPE *defaultScrollViewContentInsets;
    MISSING_TYPE *additionalScrollViewContentInsets;
    MISSING_TYPE *overscroll;
    MISSING_TYPE *structuredEditingController;
    MISSING_TYPE *trimTrailingWhitespaceController;
    MISSING_TYPE *docCommentEditAssistant;
    MISSING_TYPE *automaticallyAdjustsContentMargins;
    MISSING_TYPE *cursorRectOverrideProviders;
    MISSING_TYPE *lineAnnotationManager;
    MISSING_TYPE *gutter;
    MISSING_TYPE *foldingRibbon;
    MISSING_TYPE *minimap;
    MISSING_TYPE *minimapConfig;
    MISSING_TYPE *stylizedDocumentationController;
    MISSING_TYPE *$__lazy_storage_$_markSeparatorController;
    MISSING_TYPE *draggingSource;
    MISSING_TYPE *lineInsertionEffects;
    MISSING_TYPE *dropInsertsANewLine;
    MISSING_TYPE *dropRange;
    MISSING_TYPE *lastDragPoint;
    MISSING_TYPE *lastDragTime;
    MISSING_TYPE *registeredDraggingExtensions;
    MISSING_TYPE *$__lazy_storage_$_textFindableDisplay;
    MISSING_TYPE *$__lazy_storage_$_textFindPanel;
    MISSING_TYPE *textFindPanelDisplayed;
    MISSING_TYPE *findQuery;
    MISSING_TYPE *findResultSelectionShouldWrap;
    MISSING_TYPE *findResult;
    MISSING_TYPE *findReplaceWith;
    MISSING_TYPE *findResultNeedUpdate;
    MISSING_TYPE *findPasteboard;
    MISSING_TYPE *textFindPanelTopConstraint;
    MISSING_TYPE *$__lazy_storage_$_spellChecker;
    MISSING_TYPE *$__lazy_storage_$_selectedSymbolHighlight;
    MISSING_TYPE *lineHighlightLayoutVisualization;
    MISSING_TYPE *$__lazy_storage_$_delimiterHighlight;
    MISSING_TYPE *coverageLayoutVisualization;
    MISSING_TYPE *isEditingEnabled;
    MISSING_TYPE *$__lazy_storage_$_selectionController;
    MISSING_TYPE *selectionObservers;
    MISSING_TYPE *selectionDisplay;
    MISSING_TYPE *selection;
    MISSING_TYPE *oldSubstitutionView;
    MISSING_TYPE *$__lazy_storage_$_calloutVisualization;
    MISSING_TYPE *markedEditTransaction;
    MISSING_TYPE *markedStyle;
    MISSING_TYPE *asyncContinuations;
    MISSING_TYPE *postLayoutContinuations;
    MISSING_TYPE *emacsMarkedSourceRange;
    MISSING_TYPE *continueKillRing;
    MISSING_TYPE *deferredScrollState;
    MISSING_TYPE *contextualMenuEventConsumer;
    MISSING_TYPE *contextualMenuItemProvider;
    MISSING_TYPE *structuredSelectionDelegate;
    MISSING_TYPE *eventConsumers;
    MISSING_TYPE *editing;
    MISSING_TYPE *updateContentSizeDuringLiveResize;
    MISSING_TYPE *isInLiveResize;
    MISSING_TYPE *contentSizeIsValid;
    MISSING_TYPE *contentSize;
}

+ (id)defaultMenu;
//- (void).cxx_destruct;
@property(nonatomic, readonly) NSString *description;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)performTextFinderAction:(id)arg1;
- (void)performFindPanelAction:(id)arg1;
- (void)registerForDraggedTypes:(id)arg1;
- (void)unregisterDraggedTypes;
@property(nonatomic, readonly) BOOL isDragging;
- (void)resetCursorRects;
@property(nonatomic, readonly) SourceEditorScrollView *scrollView; // @synthesize scrollView;
- (BOOL)_wantsKeyDownForEvent:(id)arg1;
- (void)updateSelectionManagerIsActive;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id *)performSelector:(SEL)arg1 withObject:(id)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)viewDidMoveToWindow;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, readonly) _TtC12SourceEditor23SourceEditorContentView *contentView; // @synthesize contentView;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
@property(nonatomic, readonly) id accessibilityFocusedUIElement;
- (long long)characterIndexForPoint:(struct CGPoint)arg1;
- (struct CGRect)firstRectForCharacterRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (id)validAttributesForMarkedText;
- (id)attributedSubstringForProposedRange:(struct _NSRange)arg1 actualRange:(struct _NSRange *)arg2;
- (BOOL)hasMarkedText;
- (struct _NSRange)markedRange;
- (struct _NSRange)selectedRange;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)insertText:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)selectColumnDown:(id)arg1;
- (void)selectColumnUp:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)centerSelectionInVisibleArea:(id)arg1;
- (void)moveToEndOfDocumentAndModifySelection:(id)arg1;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)unfoldAllComments:(id)arg1;
- (void)foldAllComments:(id)arg1;
- (void)unfoldAllMethods:(id)arg1;
- (void)foldAllMethods:(id)arg1;
- (void)unfoldAll:(id)arg1;
- (void)unfold:(id)arg1;
- (void)fold:(id)arg1;
- (void)selectStructure:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)swapWithMark:(id)arg1;
- (void)selectToMark:(id)arg1;
- (void)deleteToMark:(id)arg1;
- (void)setMark:(id)arg1;
- (void)yankAndSelect:(id)arg1;
- (void)yank:(id)arg1;
- (void)deleteParagraph:(id)arg1;
- (void)deleteLine:(id)arg1;
- (void)insertDoubleQuoteIgnoringSubstitution:(id)arg1;
- (void)insertSingleQuoteIgnoringSubstitution:(id)arg1;
- (void)insertContainerBreak:(id)arg1;
- (void)insertLineBreak:(id)arg1;
- (void)insertTabIgnoringFieldEditor:(id)arg1;
- (void)insertNewlineIgnoringFieldEditor:(id)arg1;
- (void)insertParagraphSeparator:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)changeSpelling:(id)arg1;
- (void)ignoreSpelling:(id)arg1;
- (void)toggleContinuousSpellChecking:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (BOOL)readSelectionFromPasteboard:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;
- (id)validRequestorForSendType:(id)arg1 returnType:(id)arg2;
- (void)pasteAsPlainText:(id)arg1;
- (void)pasteAndPreserveFormatting:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

