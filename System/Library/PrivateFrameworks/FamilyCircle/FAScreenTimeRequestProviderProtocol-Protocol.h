//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FamilyCircle/NSObject-Protocol.h>

@class FAScreentimeSettingsObjectCache, NSDictionary, NSNumber;

@protocol FAScreenTimeRequestProviderProtocol <NSObject>
- (void)updateScreenTimeServerFlagSettingsForDSID:(NSNumber *)arg1 ephemeralAuthResults:(NSDictionary *)arg2 enabled:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)enableScreenTimeSettingsForDSID:(NSNumber *)arg1 screentimeObject:(FAScreentimeSettingsObjectCache *)arg2 completionHandler:(void (^)(NSNumber *, NSError *))arg3;
- (void)cacheScreenTimeSettingToDiskWithDSID:(NSNumber *)arg1 screentimeObject:(FAScreentimeSettingsObjectCache *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
@end

