//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface APServerConfigurationSettings
{
}

+ (id)storageWithDefaultValues:(id)arg1;	// IMP=0x004000000004b317
@property(readonly, nonatomic) NSDictionary *serverConfig;
- (id)_loadServerConfig;	// IMP=0x001000000004b364

// Remaining properties
@property(readonly, nonatomic) NSDictionary *serverConfigRecord; // @dynamic serverConfigRecord;

@end

