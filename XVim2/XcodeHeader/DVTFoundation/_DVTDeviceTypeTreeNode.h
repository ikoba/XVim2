//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeviceType, NSSet;

@interface _DVTDeviceTypeTreeNode : NSObject
{
    NSSet *_derivedDeviceTypes;
    _DVTDeviceTypeTreeNode *_parentNode;
    DVTDeviceType *_deviceType;
}

- (void).cxx_destruct;
@property(readonly) NSSet *derivedDeviceTypes; // @synthesize derivedDeviceTypes=_derivedDeviceTypes;
@property(readonly) DVTDeviceType *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly) __weak _DVTDeviceTypeTreeNode *parentNode; // @synthesize parentNode=_parentNode;
- (void)setDerivedDeviceTypes:(id)arg1;
- (id)initWithParentNode:(id)arg1 deviceType:(id)arg2;

@end

