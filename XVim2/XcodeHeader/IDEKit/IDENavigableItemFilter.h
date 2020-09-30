//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _IDENavigableItemFilterMatcher;

@interface IDENavigableItemFilter : NSObject
{
    BOOL _shouldShowAllChildrenUnderMatch;
    NSArray *_textFragments;
    _IDENavigableItemFilterMatcher *_textMatcher;
    _IDENavigableItemFilterMatcher *_externalPredicateMatcher;
}

+ (id)_filterForFilterText:(id)arg1 andExternalPredicates:(id)arg2 options:(unsigned long long)arg3 evaluatesRepresentedObject:(BOOL)arg4;
+ (id)filterForFilterText:(id)arg1 andPredicates:(id)arg2 options:(unsigned long long)arg3;
+ (id)filterForFilterText:(id)arg1 andPredicate:(id)arg2;
+ (id)filterForFilterText:(id)arg1 andNavigableItemPredicate:(id)arg2;
+ (id)filterForFilterText:(id)arg1 andRepresentedObjectPredicates:(id)arg2 options:(unsigned long long)arg3;
+ (id)filterForFilterText:(id)arg1 andRepresentedObjectPredicate:(id)arg2;
+ (id)filterForFilterText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) _IDENavigableItemFilterMatcher *externalPredicateMatcher; // @synthesize externalPredicateMatcher=_externalPredicateMatcher;
@property(retain, nonatomic) _IDENavigableItemFilterMatcher *textMatcher; // @synthesize textMatcher=_textMatcher;
@property(copy) NSArray *textFragments; // @synthesize textFragments=_textFragments;
@property(nonatomic) BOOL shouldShowAllChildrenUnderMatch; // @synthesize shouldShowAllChildrenUnderMatch=_shouldShowAllChildrenUnderMatch;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (BOOL)matchesRepresentedObject:(id)arg1;
- (BOOL)matchesNavigableItem:(id)arg1;
- (id)_initWithTextFragments:(id)arg1 andExternalPredicate:(id)arg2 evaluatesRepresentedObject:(BOOL)arg3;

@end

