//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTWeakInterposer, NSString;
@protocol NSMenuDelegate><DVTInvalidation;

@interface _IDEApplicationControllerMenuDelegateForwarder : NSObject <NSMenuDelegate>
{
    DVTWeakInterposer *_menuDelegate_dvtWeakInterposer;
    struct {
        unsigned int _delegateRespondsToNeedsUpdate:1;
        unsigned int _delegateRespondsToWillOpen:1;
        unsigned int _delegateRespondsToDidClose:1;
    } _delegateFlags;
}

- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithMenuDelegate:(id)arg1;
@property __weak id <NSMenuDelegate><DVTInvalidation> menuDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

