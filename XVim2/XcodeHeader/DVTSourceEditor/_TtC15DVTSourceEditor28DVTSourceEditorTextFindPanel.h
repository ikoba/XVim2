//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 30 2020 21:18:12).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "_$s12SourceEditor0aB13TextFindPanelCN.h"

#import <DVTSourceEditor/DVTSourceEditorFindPatternPanel-Protocol.h>

@class MISSING_TYPE, NSButton, NSLayoutConstraint, NSView;

__attribute__((visibility("hidden")))
@interface _TtC15DVTSourceEditor28DVTSourceEditorTextFindPanel : _$s12SourceEditor0aB13TextFindPanelCN <DVTSourceEditorFindPatternPanel>
{
    MISSING_TYPE *addPatternSeparator;
    MISSING_TYPE *addPatternSeparatorHeightConstraint;
    MISSING_TYPE *addPatternButton;
}

- (void).cxx_destruct;
- (void)textFieldTextDidChange:(id)arg1;
- (id)replacePatternField;
- (id)findPatternField;
- (void)addPatternButtonAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSButton *addPatternButton; // @synthesize addPatternButton;
@property(nonatomic) __weak NSLayoutConstraint *addPatternSeparatorHeightConstraint; // @synthesize addPatternSeparatorHeightConstraint;
@property(nonatomic) __weak NSView *addPatternSeparator; // @synthesize addPatternSeparator;

@end

