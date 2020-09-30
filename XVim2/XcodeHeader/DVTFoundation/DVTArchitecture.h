//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCopying-Protocol.h>

@class NSString;

@interface DVTArchitecture : NSObject <NSCopying>
{
    BOOL _is64Bit;
    int _CPUType;
    int _CPUSubType;
    NSString *_canonicalName;
    NSString *_displayName;
}

+ (id)architectureWithCPUType:(int)arg1 subType:(int)arg2;
+ (id)architectureWithCanonicalName:(id)arg1;
+ (id)allArchitectures;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) BOOL is64Bit; // @synthesize is64Bit=_is64Bit;
@property(readonly) int CPUSubType; // @synthesize CPUSubType=_CPUSubType;
@property(readonly) int CPUType; // @synthesize CPUType=_CPUType;
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy) NSString *canonicalName; // @synthesize canonicalName=_canonicalName;
- (_Bool)matchesCPUType:(int)arg1 andSubType:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithExtension:(id)arg1;
- (id)initWithCanonicalName:(id)arg1 displayName:(id)arg2 CPUType:(int)arg3 CPUSubType:(int)arg4 is64Bit:(BOOL)arg5;

@end

