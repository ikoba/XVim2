//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTGraph, DVTGraphLayerSelectionDetails;

@protocol DVTGraphLayer <NSObject>
@property(readonly) BOOL wantsClipping;
@property(readonly) DVTGraphLayerSelectionDetails *selectionDetails;
- (void)clearSelection;
- (BOOL)selectNext;
- (BOOL)selectPrevious;
- (void)selectDataAtIndex:(unsigned long long)arg1;
- (BOOL)selectDataAtPoint:(struct CGPoint)arg1;
- (void)drawLayerWithVisibleBounds:(struct _DVTGraphBounds)arg1;
- (id)initWithGraph:(DVTGraph *)arg1;
@end

