//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSServiceConnection, URTAlert;

__attribute__((visibility("hidden")))
@interface URTAlertConnection : NSObject
{
    BSServiceConnection *_connection;	// 8 = 0x8
    URTAlert *_alert;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002a2d
@property(retain, nonatomic) URTAlert *alert; // @synthesize alert=_alert;
@property(readonly, nonatomic) BSServiceConnection *connection; // @synthesize connection=_connection;
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000000299d

@end

