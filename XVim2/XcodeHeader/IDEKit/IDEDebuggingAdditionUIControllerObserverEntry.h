//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDECancellableToken, IDELaunchSession, NSString;

@interface IDEDebuggingAdditionUIControllerObserverEntry : NSObject
{
    IDELaunchSession *_launchSession;
    NSString *_uiControllerID;
    IDECancellableToken *_canellableToken;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly) IDECancellableToken *canellableToken; // @synthesize canellableToken=_canellableToken;
@property(readonly) NSString *uiControllerID; // @synthesize uiControllerID=_uiControllerID;
@property(readonly) __weak IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (id)initWithLaunchSession:(id)arg1 uiControllerID:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

