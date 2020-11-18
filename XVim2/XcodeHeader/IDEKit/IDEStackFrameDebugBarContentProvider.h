//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

#import <IDEKit/DVTPathCellDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, DVTPathControl, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSString;

@interface IDEStackFrameDebugBarContentProvider : IDEDebugBarContentProvider <DVTPathCellDelegate>
{
    DVTPathControl *_pathControl;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItem *_selectedItem;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_currentStackFrameObserverToken;
    DVTObservingToken *_selectedNavigableItemFrameObserverToken;
    DVTObservingToken *_debugSessionStateObserverToken;
    DVTObservingToken *_launchSessionStateObserverToken;
    DVTObservingToken *_executionEnvironmentObserverToken;
    DVTNotificationToken *_forgetNavigableItemsObserverToken;
    BOOL _handlingSetSelectedItem;
}

+ (id)keyPathsForValuesAffectingNavigableDebugItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (Class)debugSessionControllerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) IDENavigableItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(retain) DVTPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (double)xOffsetForSharedLibrariesPopUpAnchoredOnDebugBar:(id)arg1;
- (struct CGRect)additionalGrabRectOfDebugBar:(id)arg1 inTermsOfView:(id)arg2;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_selectItemBasedOnDebugSessionState;
- (void)_handleDebugBarSelectedModelItemChanged;
- (void)wasAttachedToDebugBar:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForItem:(id)arg2 defaultMenuItem:(id)arg3;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (void)_forgetNavigableItems:(id)arg1;
- (void)currentStackFrameDidChange:(id)arg1;
@property(readonly) BOOL hasRealDebugSession;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (BOOL)_userIsCurrentlyCPUDebugging;
@property(readonly) NSArray *navigableDebugItems;
- (void)_retrySetSelectedItem;
- (void)_simpleSetSelectedItemWithKVO:(id)arg1;
- (void)removeRootNavigableItemFromCoordinator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

