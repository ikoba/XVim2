//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

@class DVTEmptyContentPlaceholder, DVTNotificationToken, DVTObservingToken, IDEFirstResponderView, NSProgressIndicator, NSString;

@interface IDEEditorEmpty : IDEEditor
{
    NSString *_emptyContentString;
    IDEFirstResponderView *_firstResponderView;
    NSProgressIndicator *_progressIndicator;
    DVTObservingToken *_workspaceActivityObserver;
    BOOL _hideWorkspaceLoadingProgressIndicator;
    DVTObservingToken *_themeObserver;
    DVTNotificationToken *_fontThemeObserver;
    DVTEmptyContentPlaceholder *_placeholderView;
    BOOL _useSourceTextBackgroundColor;
}

- (void).cxx_destruct;
@property BOOL hideWorkspaceLoadingProgressIndicator; // @synthesize hideWorkspaceLoadingProgressIndicator=_hideWorkspaceLoadingProgressIndicator;
- (void)setEmptyContentString:(id)arg1;
@property BOOL useSourceTextBackgroundColor; // @synthesize useSourceTextBackgroundColor=_useSourceTextBackgroundColor;
- (void)_observeThemes;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_finishViewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_centerViewInSuperView:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

@end

