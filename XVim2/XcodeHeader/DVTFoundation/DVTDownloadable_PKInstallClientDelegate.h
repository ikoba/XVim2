//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPromise, NSTimer;

@interface DVTDownloadable_PKInstallClientDelegate : NSObject
{
    NSTimer *_timer;
    BOOL _isRunningModal;
    DVTPromise *_promise;
}

- (void).cxx_destruct;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
- (void)_callPKInstallClientStatusTimer:(id)arg1;
- (void)installClientDidFinish:(id)arg1;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClient:(id)arg1 currentState:(int)arg2 package:(id)arg3 progress:(double)arg4 timeRemaining:(double)arg5;
- (void)installClientDidBegin:(id)arg1;
- (id)initForModal:(BOOL)arg1 promise:(id)arg2;

@end

