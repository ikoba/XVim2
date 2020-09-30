//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDELaunchTestRunPhaseSheetController.h>

#import <IDEKit/IDECapsuleListViewDataSource-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDELaunchSchemeAction, NSButton, NSString;

@interface IDEPreviewActionSheetController : IDELaunchTestRunPhaseSheetController <IDECapsuleListViewDataSource>
{
    NSButton *_debugExecutableCheckbox;
    DVTObservingToken *_runDestinationObservingToken;
    DVTObservingToken *_runnableBuildableProductsObservingToken;
    DVTObservingToken *_runContextRunnableObservingToken;
    DVTNotificationToken *_buildablesToken;
    unsigned long long _runnablePopUpRunnableBuildableProductsCount;
}

+ (id)keyPathsForValuesAffectingExecutableHasBeenSelected;
+ (void)initialize;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)selectDebugExecutable:(id)arg1;
- (void)_validateNotificationPopupForTag:(long long)arg1;
- (void)loadView;
- (BOOL)executableHasBeenSelected;
- (unsigned long long)tabChoices;
- (id)selectedTabUserDefaultKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) IDELaunchSchemeAction *runPhase; // @dynamic runPhase;
@property(readonly) Class superclass;

@end

