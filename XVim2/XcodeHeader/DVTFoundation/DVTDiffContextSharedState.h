//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDiffFNVHashCache, NSArray, NSString;

@interface DVTDiffContextSharedState : NSObject
{
    NSArray *_diffDescriptors;
    DVTDiffFNVHashCache *_hashCache;
    NSString *_diffString;
}

- (void).cxx_destruct;
@property(retain) NSString *diffString; // @synthesize diffString=_diffString;
@property(retain) DVTDiffFNVHashCache *hashCache; // @synthesize hashCache=_hashCache;
@property(retain) NSArray *diffDescriptors; // @synthesize diffDescriptors=_diffDescriptors;
- (id)init;

@end

