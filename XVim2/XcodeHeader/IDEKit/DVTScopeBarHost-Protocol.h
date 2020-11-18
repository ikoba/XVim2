//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTScopeBarController, DVTScopeBarsManager, NSScrollView, NSView;

@protocol DVTScopeBarHost <NSObject>
@property(readonly) NSView *scopeBarsBaseView;

@optional
@property(readonly) struct NSEdgeInsets scopeBarsTopInsets;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
- (void)scopeBarsManager:(DVTScopeBarsManager *)arg1 didRemoveScopeBar:(DVTScopeBarController *)arg2;
- (void)scopeBarsManager:(DVTScopeBarsManager *)arg1 didInsertScopeBar:(DVTScopeBarController *)arg2;
@end

