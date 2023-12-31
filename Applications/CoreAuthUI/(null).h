//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PasscodeViewStyle, UIView;

@interface (null) : NSObject
{
    long long _rawValue;	// 8 = 0x8
    PasscodeViewStyle *_style;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
    UIView *_accessoryView;	// 40 = 0x28
}

+ (id)backOffStateWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00400000000214c4
+ (id)activeStateWithTitle:(id)arg1 subtitle:(id)arg2 accessoryView:(id)arg3;	// IMP=0x001000000002142a
- (void).cxx_destruct;	// IMP=0x0020000000021875
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) PasscodeViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) long long rawValue; // @synthesize rawValue=_rawValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002163b
- (id)withStyle:(id)arg1;	// IMP=0x001000000002154e
- (id)initWithRawValue:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 accessoryView:(id)arg4 style:(id)arg5;	// IMP=0x0010000000021314

@end

