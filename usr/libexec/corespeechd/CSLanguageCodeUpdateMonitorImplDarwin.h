//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CSLanguageCodeUpdateMonitorImplDarwin
{
    NSString *_currentLanguageCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000133c83
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;	// IMP=0x0010000000133c01
- (_Bool)isLanguageCodeCurrent:(id)arg1;	// IMP=0x0010000000133b2c
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;	// IMP=0x0010000000133995
- (void)notifySiriLanguageCodeChanged:(id)arg1;	// IMP=0x0010000000133983
- (void)_stopMonitoring;	// IMP=0x0010000000133904
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x0010000000133885
- (id)init;	// IMP=0x00100000001337d8

@end

