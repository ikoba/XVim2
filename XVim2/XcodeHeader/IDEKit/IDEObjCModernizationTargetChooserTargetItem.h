//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDEKit/IDEObjCModernizationTargetChooserItem.h>

@class IDEObjCModernizationTargetChooserAssistant;

@interface IDEObjCModernizationTargetChooserTargetItem : IDEObjCModernizationTargetChooserItem
{
    IDEObjCModernizationTargetChooserAssistant *_targetChooserAssistant;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
+ (id)keyPathsForValuesAffectingWarningMessage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingTitle;
- (void).cxx_destruct;
@property(retain) IDEObjCModernizationTargetChooserAssistant *targetChooserAssistant; // @synthesize targetChooserAssistant=_targetChooserAssistant;
- (double)rowHeight;
- (id)warningMessage;
- (id)iconImage;
- (long long)state;
- (void)setState:(long long)arg1;
- (BOOL)isEnabled;
- (id)subTitle;
- (id)title;

@end

