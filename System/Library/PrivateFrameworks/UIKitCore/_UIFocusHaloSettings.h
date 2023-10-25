//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIFocusHaloSettings : PTSettings
{
    _Bool _debugEnabled;	// 8 = 0x8
    double _thickness;	// 16 = 0x10
    double _gapWidth;	// 24 = 0x18
}

+ (id)settingsControllerModule;	// IMP=0x0060000001344a7c
@property(nonatomic) _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(nonatomic) double gapWidth; // @synthesize gapWidth=_gapWidth;
@property(nonatomic) double thickness; // @synthesize thickness=_thickness;
- (void)setDefaultValues;	// IMP=0x0000000001344a16

@end
