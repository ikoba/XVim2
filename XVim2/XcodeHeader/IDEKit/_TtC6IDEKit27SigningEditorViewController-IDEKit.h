//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/_TtC6IDEKit27SigningEditorViewController.h>

#import <IDEKit/IDECapsuleListViewDataSource-Protocol.h>
#import <IDEKit/IDESigningEditorCapabilityEditingItemChangeExistenceProtocol-Protocol.h>
#import <IDEKit/IDESigningEditorCapsuleViewStateRestorationRecordProviderDelegate-Protocol.h>

@interface _TtC6IDEKit27SigningEditorViewController (IDEKit) <IDESigningEditorCapsuleViewStateRestorationRecordProviderDelegate, IDECapsuleListViewDataSource, IDESigningEditorCapabilityEditingItemChangeExistenceProtocol>
- (BOOL)isCollapsedSavedStateForRestorationRecord:(id)arg1;
- (void)capsuleListView:(id)arg1 didCollapseRow:(long long)arg2;
- (void)capsuleListView:(id)arg1 didExpandRow:(long long)arg2;
- (BOOL)isCollapsedSavedStateForRow:(long long)arg1;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (void)addCapabilityItemWithIdentifiers:(id)arg1;
@end

