//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEIndexContainerSymbol-Protocol.h>

@class IDEIndexCollection;
@protocol IDEIndexClassSymbol;

@protocol IDEIndexCategorySymbol <IDEIndexContainerSymbol>
- (id <IDEIndexClassSymbol>)relatedClass;
- (IDEIndexCollection *)properties;
- (IDEIndexCollection *)instanceVariables;
- (IDEIndexCollection *)instanceMethods;
- (IDEIndexCollection *)classMethods;
@end

