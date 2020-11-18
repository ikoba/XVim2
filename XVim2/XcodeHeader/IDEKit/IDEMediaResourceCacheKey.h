//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSCopying-Protocol.h>

@class DVTFilePath, NSSet, NSString;

@interface IDEMediaResourceCacheKey : NSObject <NSCopying>
{
    Class _resourceClass;
    DVTFilePath *_filePath;
    NSString *_name;
    NSString *_explicitNameForFolding;
    NSSet *_applicableFoldingStrategies;
}

- (void).cxx_destruct;
@property(readonly) NSSet *applicableFoldingStrategies; // @synthesize applicableFoldingStrategies=_applicableFoldingStrategies;
@property(readonly) NSString *explicitNameForFolding; // @synthesize explicitNameForFolding=_explicitNameForFolding;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) Class resourceClass; // @synthesize resourceClass=_resourceClass;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMediaResourceCacheKey:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClass:(Class)arg1 filePath:(id)arg2 name:(id)arg3 explicitNameForFolding:(id)arg4 applicableFoldingStrategies:(id)arg5;

@end

