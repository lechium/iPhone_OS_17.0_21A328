//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCATKeyboardInputSource
{
}

- (id)_switchDisplayNameForKeyCode:(unsigned short)arg1;	// IMP=0x0040000000003b77
- (id)_persistentSwitchIdentifierForKeyCode:(unsigned short)arg1;	// IMP=0x0010000000003af2
- (long long)_actionIdentifierForKeyCode:(unsigned short)arg1 withType:(id)arg2;	// IMP=0x00100000000039ac
- (_Bool)handledEvent:(id)arg1;	// IMP=0x001000000000382b
- (long long)switchKeyForSwitch:(id)arg1;	// IMP=0x0010000000003812
- (id)switchSource;	// IMP=0x00100000000037fe
- (_Bool)isKeyboardInputSource;	// IMP=0x00100000000037f6

@end

