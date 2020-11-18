//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEFileReferenceNavigableItem.h>

@class NSString;

@interface IDEContainerFileReferenceNavigableItem : IDEFileReferenceNavigableItem
{
    NSString *_scmAggregateLocalStatus;
    NSString *_scmAggregateServerStatus;
    BOOL _isRecursiveContainerReference;
}

+ (id)keyPathsForValuesAffectingAggregateSourceControlServerStatus;
+ (id)keyPathsForValuesAffectingAggregateSourceControlLocalStatus;
- (void).cxx_destruct;
@property(readonly) NSString *aggregateSourceControlServerStatus;
@property(readonly) NSString *aggregateSourceControlLocalStatus;
- (void)updateAttributes;
- (BOOL)coordinatorFilteringShouldFilterChildItems;
- (BOOL)_shouldResetChildItemsOnDocumentClose;
- (void)updateChildRepresentedObjects;
- (id)childRepresentedObjects;
- (id)childItemsKeyPath;
- (BOOL)isLeaf;
- (void)_setParentItem:(id)arg1;
- (BOOL)isDocumentNavigableItem;

@end

