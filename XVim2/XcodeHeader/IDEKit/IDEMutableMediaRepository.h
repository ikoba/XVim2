//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEMediaRepository.h>

@class NSMutableSet;

@interface IDEMutableMediaRepository : IDEMediaRepository
{
    NSMutableSet *_resources;
}

- (void).cxx_destruct;
- (void)removeResource:(id)arg1;
- (void)addResource:(id)arg1;
- (void)removeResources:(id)arg1;
- (void)addResources:(id)arg1;
- (id)resources;
- (id)initWithResources:(id)arg1;
- (id)init;

@end

