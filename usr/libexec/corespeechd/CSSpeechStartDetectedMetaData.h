//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSSpeechStartDetectedMetaData : NSObject
{
    unsigned long long _hostTime;	// 8 = 0x8
    long long _audioRecordType;	// 16 = 0x10
    NSString *_deviceId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000b5426
@property(readonly, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, nonatomic) long long audioRecordType; // @synthesize audioRecordType=_audioRecordType;
@property(readonly, nonatomic) unsigned long long hostTime; // @synthesize hostTime=_hostTime;
- (id)initWithHostTime:(unsigned long long)arg1 audioRecordType:(long long)arg2 audioRecordDeviceId:(id)arg3;	// IMP=0x00100000000b5387

@end

