//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDESourceEditor/DVTAnnotationManagerDelegate-Protocol.h>
#import <IDESourceEditor/DVTColorLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/DVTFileLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/DVTImageLiteralQuickEditViewControllerDelegate-Protocol.h>
#import <IDESourceEditor/DVTInvalidation-Protocol.h>
#import <IDESourceEditor/DVTPathCellDelegate-Protocol.h>
#import <IDESourceEditor/IDEAnalyzerResultsHostingEditor-Protocol.h>
#import <IDESourceEditor/IDEBreakpointObserver-Protocol.h>
#import <IDESourceEditor/IDEEditorInternalErrorBannerControllerDelegate-Protocol.h>
#import <IDESourceEditor/IDEJumpToLineDestination-Protocol.h>
#import <IDESourceEditor/IDELibraryContentDestination-Protocol.h>
#import <IDESourceEditor/IDEQuickHelpDataContextService-Protocol.h>
#import <IDESourceEditor/IDESingleFileCommandSupportingEditor-Protocol.h>
#import <IDESourceEditor/IDESourceExpressionSource-Protocol.h>
#import <IDESourceEditor/IDETestingSelection-Protocol.h>
#import <IDESourceEditor/IDETestsInFileObserver-Protocol.h>
#import <IDESourceEditor/NSMenuDelegate-Protocol.h>
#import <IDESourceEditor/NSTouchBarDelegate-Protocol.h>
#import <IDESourceEditor/NSUserInterfaceValidations-Protocol.h>
#import <IDESourceEditor/_TtP15IDESourceEditor26IDEWorkspaceEmbeddedEditor_-Protocol.h>
#import <IDESourceEditor/_TtP15IDESourceEditor28IDESourceEditorViewContainer_-Protocol.h>
#import <IDESourceEditor/_TtP6IDEKit23IDEHostEditorNavigating_-Protocol.h>
#import <IDESourceEditor/_TtP6IDEKit42IDEHostingScrollViewForDropdownAnnotations_-Protocol.h>
#import <IDESourceEditor/_TtP9DVTMarkup28PlaygroundMarkupViewDelegate_-Protocol.h>

@class DVTSDK, DVTSourceExpression, IDEAnalyzerResultsExplorer, IDENoteAnnotationExplorer, MISSING_TYPE, NSColor, NSScrollView, NSString, NSView, _TtC15IDESourceEditor19IDESourceEditorView;
@protocol IDETestCollection;

@interface _TtC15IDESourceEditor16SourceCodeEditor : IDEEditor <NSTouchBarDelegate, DVTPathCellDelegate, NSUserInterfaceValidations, NSMenuDelegate, _TtP15IDESourceEditor26IDEWorkspaceEmbeddedEditor_, DVTInvalidation, DVTAnnotationManagerDelegate, IDETestsInFileObserver, IDESourceExpressionSource, IDEQuickHelpDataContextService, IDEBreakpointObserver, IDEJumpToLineDestination, IDETestingSelection, IDEAnalyzerResultsHostingEditor, _TtP15IDESourceEditor28IDESourceEditorViewContainer_, IDESingleFileCommandSupportingEditor, DVTColorLiteralQuickEditViewControllerDelegate, DVTImageLiteralQuickEditViewControllerDelegate, DVTFileLiteralQuickEditViewControllerDelegate, _TtP9DVTMarkup28PlaygroundMarkupViewDelegate_, IDELibraryContentDestination, IDEEditorInternalErrorBannerControllerDelegate, _TtP6IDEKit23IDEHostEditorNavigating_, _TtP6IDEKit42IDEHostingScrollViewForDropdownAnnotations_>
{
    MISSING_TYPE *sourceEditorView;
    MISSING_TYPE *containerView;
    MISSING_TYPE *controllerContentView;
    MISSING_TYPE *contentGenerationBackgroundView;
    MISSING_TYPE *messageView;
    MISSING_TYPE *progressIndicator;
    MISSING_TYPE *progressIndicatorDisplayTime;
    MISSING_TYPE *refactoringController;
    MISSING_TYPE *coverageGenerationObserver;
    MISSING_TYPE *boundsChangeObserver;
    MISSING_TYPE *mouseOverExpressionNotification;
    MISSING_TYPE *pendingNavigationItemLocations;
    MISSING_TYPE *docSavedNotificationToken;
    MISSING_TYPE *popover;
    MISSING_TYPE *allowMinimap;
    MISSING_TYPE *sourceEditorScrollViewClass;
    MISSING_TYPE *alreadyPrepared;
    MISSING_TYPE *viewState;
    MISSING_TYPE *didSetupEditorCalled;
    MISSING_TYPE *currentToolbarViewController;
    MISSING_TYPE *coverageFile;
    MISSING_TYPE *$__lazy_storage_$_touchBarController;
    MISSING_TYPE *allowBecomeMainViewController;
    MISSING_TYPE *lastPosition;
    MISSING_TYPE *currentLandmark;
    MISSING_TYPE *selectionObservers;
    MISSING_TYPE *themeChangeNotificationToken;
    MISSING_TYPE *currentRenderedMarkupView;
    MISSING_TYPE *dataSource;
    MISSING_TYPE *currentStructuredSelectionMenuController;
    MISSING_TYPE *actionMenuItemProviders;
    MISSING_TYPE *colorPanelNotificationToken;
    MISSING_TYPE *quickHelpForceTouchController;
    MISSING_TYPE *issueObserverToken;
    MISSING_TYPE *issueManager;
    MISSING_TYPE *annotationManager;
    MISSING_TYPE *analyzerVisualizations;
    MISSING_TYPE *analyzerResultsExplorer;
    MISSING_TYPE *analyzerResultsScopeBar;
    MISSING_TYPE *hidingAnalyzerExplorer;
    MISSING_TYPE *noteAnnotationExplorer;
    MISSING_TYPE *noteAnnotationExplorerObserver;
    MISSING_TYPE *singleFileProcessingToolbarController;
    MISSING_TYPE *quickHelpExpression;
    MISSING_TYPE *capturedContinueToHereDocumentLocation;
    MISSING_TYPE *capturedContinueToLineDocumentLocation;
    MISSING_TYPE *$__lazy_storage_$_layoutExtensionLoader;
    MISSING_TYPE *sourceEditorExtensionCancellationScopeBarController;
    MISSING_TYPE *sourceEditorExtensionErrorScopeBarController;
    MISSING_TYPE *sourceKitServiceStatusObserver;
    MISSING_TYPE *languageServiceStatusObserver;
    MISSING_TYPE *sourceKitSemaDisabledObserver;
    MISSING_TYPE *sourceKitErrorTimeout;
    MISSING_TYPE *sourceKitErrorTimeoutDuration;
    MISSING_TYPE *sourceKitErrorScopeBarController;
    MISSING_TYPE *languageServiceCrashedTimeout;
    MISSING_TYPE *languageServiceCrashedTimeoutDuration;
    MISSING_TYPE *languageServiceCrashedScopeBarController;
    MISSING_TYPE *editorForNavigationRequests;
}

+ (id)keyPathsForValuesAffectingSelectedExpression;
+ (id)keyPathsForValuesAffectingIsWorkspaceBuilding;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (BOOL)supportsFullSizeContent;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) __weak NSScrollView *dropdownHostingScrollView;
@property(nonatomic, retain) IDEEditor *editorForNavigationRequests; // @synthesize editorForNavigationRequests;
- (void)sourceCodeAuxiliaryEditorMenuItem3:(id)arg1;
- (void)sourceCodeAuxiliaryEditorMenuItem2:(id)arg1;
- (void)sourceCodeAuxiliaryEditorMenuItem1:(id)arg1;
- (id)titleForInternalError:(id)arg1;
- (id)componentForInternalError:(id)arg1;
- (id)relevantFilesForInternalError:(id)arg1;
- (void)toggleComments:(id)arg1;
- (void)invokeSourceEditorExtensionCommand:(id)arg1;
- (void)selectAllSymbols:(id)arg1;
- (void)toggleTokenizedEditing:(id)arg1;
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (void)symbolsForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)revealInSymbolNavigator:(id)arg1;
- (void)contextMenu_revealInSymbolNavigator:(id)arg1;
- (void)copyQualifiedSymbolName:(id)arg1;
- (void)copySymbolName:(id)arg1;
- (void)continueToCurrentLine:(id)arg1;
- (void)continueToHere:(id)arg1;
@property(nonatomic, readonly) DVTSDK *sdk;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(nonatomic, readonly) DVTSourceExpression *mouseOverExpression;
@property(nonatomic, readonly) struct CGRect currentSelectionFrame;
@property(nonatomic, readonly) NSView *quickHelpTargetView;
@property(nonatomic, retain) DVTSourceExpression *quickHelpExpression; // @synthesize quickHelpExpression;
@property(nonatomic, readonly) DVTSourceExpression *contextMenuExpression;
@property(nonatomic, readonly) NSString *selectedText;
@property(nonatomic, readonly) DVTSourceExpression *selectedExpression;
- (void)quickHelpDataContextForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(nonatomic, readonly) id <IDETestCollection> selectedTests;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testsInFileUpdated:(id)arg1;
- (void)enableDisableBreakpointAtCurrentLine:(id)arg1;
- (void)toggleBreakpointAtCurrentLine:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)breakpointsActivationStateChanged;
@property(nonatomic, readonly) BOOL isWorkspaceBuilding;
- (void)compileCurrentFile;
- (BOOL)canCompileFile;
- (void)analyzeCurrentFile;
- (BOOL)canAnalyzeFile;
- (void)preprocessCurrentFile;
- (BOOL)canPreprocessFile;
- (void)assembleCurrentFile;
- (BOOL)canAssembleFile;
@property(nonatomic, retain) IDENoteAnnotationExplorer *noteAnnotationExplorer; // @synthesize noteAnnotationExplorer;
- (void)hideAnalyzerExplorerAnimate:(BOOL)arg1;
- (void)showAnalyzerExplorerForMessage:(id)arg1 animate:(BOOL)arg2;
@property(nonatomic, retain) IDEAnalyzerResultsExplorer *analyzerResultsExplorer; // @synthesize analyzerResultsExplorer;
- (void)hideAllMessageBubbleAnnotations;
- (void)showAllMessageBubbleAnnotationsIfNotExplicitlyHidden;
- (void)removeLocalAnnotation:(id)arg1;
- (void)addLocalAnnotation:(id)arg1;
- (void)refreshAnalyzerVisualization:(id)arg1;
- (void)removeAnalyzerVisualization:(id)arg1 fadeOut:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addAnalyzerVisualization:(id)arg1 fadeIn:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct _NSRange)characterRangeFromDocumentLocation:(id)arg1;
@property(nonatomic, readonly) long long textIndentWidth;
@property(nonatomic, readonly) NSColor *backgroundColor;
- (id)rectArrayForCharacterRange:(struct _NSRange)arg1;
@property(nonatomic, readonly) NSView *textView;
- (void)didRemoveAnnotations:(id)arg1;
- (void)didInsertAnnotations:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
@property(nonatomic, readonly) BOOL providesOwnFindBar;
- (void)showQuickHelpUnderMouse:(id)arg1;
- (void)contextMenu_showQuickHelp:(id)arg1;
- (void)showQuickHelp:(id)arg1;
- (void)fixAllIssues:(id)arg1;
- (void)jumpToDefinitionForCurrentEventAndRange;
- (void)jumpToDefinitionWithShiftPlusAlternate:(id)arg1;
- (void)jumpToDefinitionWithAlternate:(id)arg1;
- (void)jumpToDefinition:(id)arg1;
- (void)fileQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)fileQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didClickMoreButtonForFilePath:(id)arg2;
- (void)imageQuickEdit:(id)arg1 didSelectFilePath:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didSelectMoreColorOptions:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didHighlightColor:(id)arg2;
- (void)colorQuickEdit:(id)arg1 didSelectColor:(id)arg2;
- (void)sendMouseExpressionDidChange;
- (void)playgroundMarkupView:(id)arg1 openLink:(id)arg2;
- (void)applyStateDictionaryFromPreviousEditor:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectAndHighlightDocumentLocations:(id)arg1;
- (void)selectDocumentLocations:(id)arg1;
@property(nonatomic) struct NSEdgeInsets fullSizeContentInsets;
@property(nonatomic, readonly) BOOL canBecomeMainViewController;
@property(nonatomic) BOOL allowBecomeMainViewController; // @synthesize allowBecomeMainViewController;
- (void)takeFocus;
- (id)initialQueryForJumpToLine;
- (id)documentLocationForJumpToLineQuery:(id)arg1;
- (BOOL)depositAssetsFromPasteboard:(id)arg1;
- (void)createCodeSnippetFromSelection:(id)arg1;
- (void)changeSourceCodeLanguageAction:(id)arg1;
- (void)useSourceCodeLanguageFromFileDataTypeAction:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)jumpBetweenSourceFileAndGeneratedFile:(id)arg1;
- (void)jumpToLine:(id)arg1;
- (void)resetFontSize:(id)arg1;
- (void)decreaseFontSize:(id)arg1;
- (void)increaseFontSize:(id)arg1;
- (void)editThemes:(id)arg1;
- (void)changeTheme:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)setupEditorMenu:(id)arg1;
- (void)primitiveInvalidate;
- (void)indexChanged:(id)arg1;
- (void)didSetupEditor;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3 sourceEditorScrollViewClass:(Class)arg4;
@property(nonatomic, readonly) NSScrollView *mainScrollView;
@property(nonatomic, retain) _TtC15IDESourceEditor19IDESourceEditorView *sourceEditorView; // @synthesize sourceEditorView;
- (void)installCodeCoverageVisualization;
- (void)toggleCodeCoverageShown:(id)arg1;
- (void)indentSourceCodeSelection:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)renameRefactor:(id)arg1;
- (void)localRefactor:(id)arg1;
- (void)wrapInNSLocalizedString:(id)arg1;
- (void)generateMemberwiseInitializer:(id)arg1;
- (void)generateMissingFunctionDefinitions:(id)arg1;
- (void)expandDefault:(id)arg1;
- (void)convertToSwitch:(id)arg1;
- (void)addMissingSwitchCases:(id)arg1;
- (void)addMissingProtocolRequirements:(id)arg1;
- (void)addMissingAbstractClassOverrides:(id)arg1;
- (void)extractRepeatedExpression:(id)arg1;
- (void)extractExpression:(id)arg1;
- (void)extractMethod:(id)arg1;
- (void)extractFunction:(id)arg1;

@end

