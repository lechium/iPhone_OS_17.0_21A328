//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSObject.h>

@class SUUIJSColor;

__attribute__((visibility("hidden")))
@interface SUUIJSAnalyzedImageColors : IKJSObject
{
    SUUIJSColor *_backgroundColor;	// 8 = 0x8
    SUUIJSColor *_textPrimaryColor;	// 16 = 0x10
    SUUIJSColor *_textSecondaryColor;	// 24 = 0x18
    _Bool _isBackgroundLight;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023c55d
@property(readonly, nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(readonly, nonatomic) SUUIJSColor *textSecondaryColor; // @synthesize textSecondaryColor=_textSecondaryColor;
@property(readonly, nonatomic) SUUIJSColor *textPrimaryColor; // @synthesize textPrimaryColor=_textPrimaryColor;
@property(readonly, nonatomic) SUUIJSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;	// IMP=0x000000000023c355

@end
