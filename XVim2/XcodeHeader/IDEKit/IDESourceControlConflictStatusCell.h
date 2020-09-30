//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSAttributedString, NSNumber;

@interface IDESourceControlConflictStatusCell : NSTextFieldCell
{
    NSAttributedString *_string;
    NSNumber *_conflictStateForUpdateOrMerge;
    BOOL _hidden;
}

+ (id)keyPathsForValuesAffectingHasDisplayableStatus;
+ (void)initialize;
- (void).cxx_destruct;
@property BOOL hidden; // @synthesize hidden=_hidden;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSize;
@property(readonly) BOOL hasDisplayableStatus;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)_bezelPathInRect:(struct CGRect)arg1;
- (void)_drawStatusString:(id)arg1 inPathRect:(struct CGRect)arg2 view:(id)arg3;
- (id)_validateAttributedString;
@property(copy) NSNumber *conflictStateForUpdateOrMerge; // @synthesize conflictStateForUpdateOrMerge=_conflictStateForUpdateOrMerge;
- (id)init;

@end

