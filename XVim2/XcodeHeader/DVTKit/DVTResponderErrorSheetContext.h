//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface DVTResponderErrorSheetContext : NSObject
{
    id _outerCompletionDelegate;
    SEL _outerCompletionSelector;
    void *_outerContext;
    NSError *_error;
}

- (void).cxx_destruct;
@property(retain) NSError *error; // @synthesize error=_error;
@property void *outerContext; // @synthesize outerContext=_outerContext;
@property SEL outerCompletionSelector; // @synthesize outerCompletionSelector=_outerCompletionSelector;
@property(retain) id outerCompletionDelegate; // @synthesize outerCompletionDelegate=_outerCompletionDelegate;

@end

