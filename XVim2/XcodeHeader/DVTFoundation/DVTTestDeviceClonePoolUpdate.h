//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface DVTTestDeviceClonePoolUpdate : NSObject
{
    NSString *_originalDeviceIdentifier;
    NSArray *_cloneDescriptions;
    unsigned long long _kind;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long kind; // @synthesize kind=_kind;
@property(readonly, copy) NSArray *cloneDescriptions; // @synthesize cloneDescriptions=_cloneDescriptions;
@property(readonly, copy) NSString *originalDeviceIdentifier; // @synthesize originalDeviceIdentifier=_originalDeviceIdentifier;
- (id)initWithKind:(unsigned long long)arg1 cloneDescriptions:(id)arg2 originalDeviceIdentifier:(id)arg3;

@end

