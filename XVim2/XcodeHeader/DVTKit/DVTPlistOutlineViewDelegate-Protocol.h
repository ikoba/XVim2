//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSOutlineViewDelegate-Protocol.h>

@class NSNotification, NSOutlineView;

@protocol DVTPlistOutlineViewDelegate <NSOutlineViewDelegate>
- (void)outlineViewColumnDidResize:(NSNotification *)arg1;
- (BOOL)outlineView:(NSOutlineView *)arg1 handleTabKey:(unsigned short)arg2;
- (BOOL)outlineView:(NSOutlineView *)arg1 handleReturnKey:(unsigned short)arg2;
- (void)textDidEndEditingColumn:(long long)arg1 row:(long long)arg2 withMovement:(long long)arg3;
- (void)toggleEditRawKeysAndValues:(id)arg1;
- (void)setPlistTypeDate:(id)arg1;
- (void)setPlistTypeData:(id)arg1;
- (void)setPlistTypeBoolean:(id)arg1;
- (void)setPlistTypeNumber:(id)arg1;
- (void)setPlistTypeString:(id)arg1;
- (void)setPlistTypeDictionary:(id)arg1;
- (void)setPlistTypeArray:(id)arg1;
- (void)shiftRowRight:(id)arg1;
- (void)shiftRowLeft:(id)arg1;
- (void)DVTPlist_unfoldAll:(id)arg1;
- (void)DVTPlist_unfold:(id)arg1;
- (void)DVTPlist_foldAll:(id)arg1;
- (void)DVTPlist_fold:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)addAction:(id)arg1;
- (void)delete:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)cancel:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
@end

