//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SHRotatingInstallationID : NSObject
{
}

+ (id)creationDate;	// IMP=0x0080000000027e67
+ (void)setCreationDate:(id)arg1;	// IMP=0x0080000000027df3
+ (id)installationID;	// IMP=0x0080000000027d95
+ (void)setInstallationID:(id)arg1;	// IMP=0x0080000000027d21
+ (id)cachedInstallationIDWithMaxAge:(double)arg1;	// IMP=0x0080000000027afe
+ (id)cachedInstallationForDays:(long long)arg1;	// IMP=0x0080000000027997
+ (id)cachedInstallationIDForUTCDay;	// IMP=0x0080000000027983

@end

