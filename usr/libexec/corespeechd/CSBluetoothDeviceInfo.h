//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSBluetoothDeviceInfo : NSObject
{
    _Bool _supportDoAP;	// 8 = 0x8
    _Bool _supportMph;	// 9 = 0x9
    _Bool _isTemporaryPairedNotInContacts;	// 10 = 0xa
    NSString *_deviceIdentifier;	// 16 = 0x10
    NSString *_address;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000108d62
@property(nonatomic) _Bool isTemporaryPairedNotInContacts; // @synthesize isTemporaryPairedNotInContacts=_isTemporaryPairedNotInContacts;
@property(nonatomic) _Bool supportMph; // @synthesize supportMph=_supportMph;
@property(nonatomic) _Bool supportDoAP; // @synthesize supportDoAP=_supportDoAP;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;

@end

