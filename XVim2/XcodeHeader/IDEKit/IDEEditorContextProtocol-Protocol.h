//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEEditor, IDENavigableItemCoordinator;
@protocol IDEEditorHistoryControllerItem;

@protocol IDEEditorContextProtocol <NSObject>
@property(readonly, nonatomic) IDEEditor *editor;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator;
- (BOOL)_openEmptyEditor;
- (void)_giveEditorFocusIfNeeded;
- (BOOL)_openEditorHistoryItem:(id <IDEEditorHistoryControllerItem>)arg1 updateHistory:(BOOL)arg2;
- (id <IDEEditorHistoryControllerItem>)currentHistoryItem;
@end

