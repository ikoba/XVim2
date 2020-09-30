//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFuzzyMatchCandidateBlock, DVTFuzzyMatchPattern, NSArray;

@interface DVTTextCompletionSessionScoringStateChunk : NSObject
{
    char *_matches;
    long long _matchesCount;
    DVTFuzzyMatchCandidateBlock *_textBlock;
    DVTFuzzyMatchPattern *_pattern;
    NSArray *_candidates;
    NSArray *_matchingCompletions;
}

- (void).cxx_destruct;
@property(retain) NSArray *matchingCompletions; // @synthesize matchingCompletions=_matchingCompletions;
@property(retain) NSArray *candidates; // @synthesize candidates=_candidates;
@property(retain) DVTFuzzyMatchPattern *pattern; // @synthesize pattern=_pattern;
- (void)updateWithPattern:(id)arg1 precision:(long long)arg2 capturingRanges:(BOOL)arg3;
- (void)setAllMatchesTo:(BOOL)arg1;
- (id)initWithCandidates:(id)arg1;

@end

