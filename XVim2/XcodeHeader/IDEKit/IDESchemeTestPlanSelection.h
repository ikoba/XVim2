//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEScheme, NSAttributedString, _TtC13IDEFoundation26IDESchemeTestPlanReference;

@interface IDESchemeTestPlanSelection : NSObject
{
    IDEScheme *_scheme;
    _TtC13IDEFoundation26IDESchemeTestPlanReference *_testPlan;
}

- (void).cxx_destruct;
@property(readonly) _TtC13IDEFoundation26IDESchemeTestPlanReference *testPlan; // @synthesize testPlan=_testPlan;
@property(readonly) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property(readonly, copy) NSAttributedString *title;
- (id)initWithScheme:(id)arg1 testPlan:(id)arg2;

@end

