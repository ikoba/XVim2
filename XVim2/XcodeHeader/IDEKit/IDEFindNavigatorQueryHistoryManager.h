//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace, NSArray;

@interface IDEFindNavigatorQueryHistoryManager : NSObject
{
    IDEWorkspace *_workspace;
    NSArray *_history;
}

- (void).cxx_destruct;
@property(readonly) NSArray *history; // @synthesize history=_history;
- (void)addQueryHistoryItem:(id)arg1;
- (void)clearHistory;
- (void)scheduleSavingHistory;
- (void)saveQueryHistory;
- (void)beginPersistingHistoryForWorkspace:(id)arg1;
- (id)init;

@end

