//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTViewControllerKit/DVTViewController.h>

#import <IDEKit/DVTStatefulObject-Protocol.h>
#import <IDEKit/IDESelectionSource-Protocol.h>

@class DVTNotificationToken, DVTStateToken, IDESelection, IDEWorkspace, IDEWorkspaceDocument, IDEWorkspaceTabController, NSString;
@protocol IDEWorkspaceDocumentProvider;

@interface IDEViewController : DVTViewController <IDESelectionSource, DVTStatefulObject>
{
    DVTNotificationToken *_willBeginSheetNotificationToken;
    BOOL _didAssertForMissingWorkspaceDocument;
    IDESelection *_outputSelection;
    DVTStateToken *_stateToken;
    id <IDEWorkspaceDocumentProvider> _workspaceDocumentProvider;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (long long)version;
+ (id)keyPathsForValuesAffectingWorkspace;
+ (id)keyPathsForValuesAffectingWorkspaceDocument;
//- (void).cxx_destruct;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property BOOL didAssertForMissingWorkspaceDocument; // @synthesize didAssertForMissingWorkspaceDocument=_didAssertForMissingWorkspaceDocument;
@property(retain, nonatomic) id <IDEWorkspaceDocumentProvider> workspaceDocumentProvider; // @synthesize workspaceDocumentProvider=_workspaceDocumentProvider;
@property(readonly, nonatomic) DVTStateToken *stateToken; // @synthesize stateToken=_stateToken;
@property(copy, nonatomic) IDESelection *outputSelection; // @synthesize outputSelection=_outputSelection;
- (void)setStateToken:(id)arg1;
- (BOOL)_knowsAboutInstalledState;
- (void)revertState;
- (void)commitState;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly, nonatomic) BOOL automaticallyInvalidatesChildViewControllers;
- (void)_invalidateSubViewControllersForView:(id)arg1;
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;
@property(readonly, copy, nonatomic) IDESelection *contextMenuSelection;
@property(readonly, nonatomic) IDEWorkspace *workspace;
@property(readonly, nonatomic) IDEWorkspaceDocument *workspaceDocument;
- (void)_resolveWorkspaceDocumentProvider;
- (void)_resolveWorkspaceTabController;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

