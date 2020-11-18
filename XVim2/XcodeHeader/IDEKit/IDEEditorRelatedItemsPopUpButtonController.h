//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/DVTWindowActivationStateObserver-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTDelayedMenuGradientImageButton, DVTStackBacktrace, IDEEditorContext, NSString;
@protocol DVTCancellable;

@interface IDEEditorRelatedItemsPopUpButtonController : NSObject <DVTWindowActivationStateObserver, DVTInvalidation, NSMenuDelegate>
{
    IDEEditorContext *_editorContext;
    DVTDelayedMenuGradientImageButton *_button;
    DVTDelayedInvocation *_updateUIInvocation;
    id <DVTCancellable> _activationStateObserver;
    BOOL _editorContextDidInstall;
    BOOL _relatedItemsButtonEnabled;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL relatedItemsButtonEnabled; // @synthesize relatedItemsButtonEnabled=_relatedItemsButtonEnabled;
- (id)_relatedItemsMenuItems;
- (id)_locallyModifiedFilesMenuItem;
- (id)_locallyModifiedDocumentFilePaths;
- (id)_recentFilesMenuItem;
- (id)_addSubmenuForDocumentURLs:(id)arg1 submenuTitle:(id)arg2 failureDescription:(id)arg3 showCheckmarkForOpenDocument:(BOOL)arg4;
- (id)_addMenuItemForNavigableItem:(id)arg1 parentMenuDescription:(id)arg2;
- (void)_clearRecentEditorDocumentsList:(id)arg1;
- (void)_changeMaximumRecentFilesLimit:(id)arg1;
- (id)_recentEditorDocumentsCapacityPreferenceMenuItem;
- (id)_menu;
- (void)_navigateToRelatedNavigableItem:(id)arg1;
- (void)primitiveInvalidate;
- (void)showRelatedItemsMenu:(id)arg1;
- (id)editorRelatedItemsPopUpButtonView;
- (void)_updateUI;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)editorContextDidInstall;
- (id)initWithEditorContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

