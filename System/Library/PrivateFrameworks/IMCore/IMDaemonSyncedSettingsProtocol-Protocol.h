//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@protocol IMDaemonSyncedSettingsProtocol <NSObject>
- (void)setSettingValue:(id)arg1 forKey:(long long)arg2;
- (void)fetchSettingValueForKey:(long long)arg1 reply:(void (^)(id))arg2;
@end
