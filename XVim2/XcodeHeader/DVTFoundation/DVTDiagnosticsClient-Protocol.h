//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class DVTDiagnosticsCollector;

@protocol DVTDiagnosticsClient <NSObject>
- (void)collect:(DVTDiagnosticsCollector *)arg1;

@optional
- (void)willCollect;
@end

