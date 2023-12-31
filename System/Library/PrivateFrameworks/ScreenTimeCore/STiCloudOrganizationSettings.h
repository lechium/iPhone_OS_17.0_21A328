//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "STCoreOrganizationSettings.h"

@class NSString, STiCloudOrganization;

__attribute__((visibility("hidden")))
@interface STiCloudOrganizationSettings : STCoreOrganizationSettings
{
}

+ (id)serializableClassName;	// IMP=0x0010000000038444
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x000000000003818b
- (id)dictionaryRepresentation;	// IMP=0x0000000000037fc6
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000037a4c
- (id)computeUniqueIdentifier;	// IMP=0x0000000000037a32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAppAndWebsiteActivityEnabled; // @dynamic isAppAndWebsiteActivityEnabled;
@property(retain, nonatomic) STiCloudOrganization *organization; // @dynamic organization;
@property(copy, nonatomic) NSString *recoveryAltDSID; // @dynamic recoveryAltDSID;
@property(readonly) Class superclass;

@end

