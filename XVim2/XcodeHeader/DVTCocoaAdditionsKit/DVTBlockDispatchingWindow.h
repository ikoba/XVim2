//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMutableDictionary;

@interface DVTBlockDispatchingWindow : NSWindow
{
    NSMutableDictionary *_blocks;
    long long _nextBlockID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)scheduleBlock:(CDUnknownBlockType)arg1;
- (void)sendEvent:(id)arg1;

@end

