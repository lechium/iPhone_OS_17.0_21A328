//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

@interface CarFocusGuideDebugView
{
    unsigned long long _direction;	// 8 = 0x8
    UILabel *_directionLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007b807e
- (void)setUserInteractionEnabled:(_Bool)arg1;	// IMP=0x00100000007b803d
- (id)_colorForDirection:(unsigned long long)arg1;	// IMP=0x00100000007b8003
- (void)_updateColors;	// IMP=0x00100000007b7e89
- (id)initWithDirection:(unsigned long long)arg1;	// IMP=0x00100000007b7b74

@end

