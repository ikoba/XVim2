//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (DVTFoundationClassAdditions)
- (void)dvt_reverseObjects;
- (void)dvt_recursivelyRemoveAllObjects;
- (_Bool)dvt_uniqueSortedInsert:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (_Bool)dvt_uniqueSortedInsert:(id)arg1;
- (void)dvt_sortedMerge:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (void)dvt_sortedMerge:(id)arg1;
- (long long)dvt_sortedInsert:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (long long)dvt_sortedInsert:(id)arg1 withComparisonSelector:(SEL)arg2;
- (long long)dvt_sortedInsert:(id)arg1;
- (void)dvt_truncateToMaxCount:(long long)arg1;
- (void)dvt_moveObjectAtIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)dvt_stablePartitionObjectsPassingIsSuffixTest:(CDUnknownBlockType)arg1;
- (void)dvt_keepObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)dvt_removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)dvt_addObjectsFromCollection:(id)arg1;
- (void)dvt_addObjectsFromArrayIfAbsent:(id)arg1;
- (void)dvt_addObjectIfNonNil:(id)arg1;
- (void)dvt_insertObjects:(id)arg1 atIndex:(long long)arg2;
- (void)dvt_insertObjectIfNonNil:(id)arg1 atIndex:(long long)arg2;
- (void)dvt_addObjectIfAbsent:(id)arg1;
- (id)dvt_popLastObject;
- (id)dvt_popFirstObject;
@end

