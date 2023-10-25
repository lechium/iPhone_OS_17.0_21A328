//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, _TtC7CoreIDV13XPCAuditToken, _TtC7CoreIDV30XPCMobileDocumentReaderRequest, _TtC7CoreIDV36XPCMobileDocumentReaderConfiguration, _TtC7CoreIDV41XPCMobileDocumentReaderCertificateRequest, _TtC7CoreIDV41XPCMobileDocumentReaderIdentityKeyRequest, _TtC7CoreIDV43XPCMobileDocumentReaderDeviceEngagementType;

@interface _TtC8coreidvd32MobileDocumentReaderSessionProxy : NSObject
{
    MISSING_TYPE *_mobileDocumentReaderFlow;	// 8 = 0x8
    MISSING_TYPE *_storageFlow;	// 48 = 0x30
    MISSING_TYPE *delegateProxy;	// 88 = 0x58
    MISSING_TYPE *entitlementCheckerProtocol;	// 96 = 0x60
    MISSING_TYPE *flowProtocol;	// 112 = 0x70
    MISSING_TYPE *isEntitledForStorage;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x004000000022dc00
- (id)init;	// IMP=0x001000000022dba0
- (void)deleteCertificate:(_TtC7CoreIDV41XPCMobileDocumentReaderCertificateRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x001000000022d990
- (void)storeCertificate:(_TtC7CoreIDV41XPCMobileDocumentReaderCertificateRequest *)arg1 certificateDER:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;	// IMP=0x001000000022c8f0
- (void)certificate:(_TtC7CoreIDV41XPCMobileDocumentReaderCertificateRequest *)arg1 completionHandler:(void (^)(_TtC7CoreIDV42XPCMobileDocumentReaderCertificateResponse *, NSError *))arg2;	// IMP=0x001000000022b190
- (void)deleteIdentityKey:(_TtC7CoreIDV41XPCMobileDocumentReaderIdentityKeyRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x00100000002299f0
- (void)identityKey:(_TtC7CoreIDV41XPCMobileDocumentReaderIdentityKeyRequest *)arg1 completionHandler:(void (^)(_TtC7CoreIDV42XPCMobileDocumentReaderIdentityKeyResponse *, NSError *))arg2;	// IMP=0x0010000000228380
- (void)cancelReadWithCompletionHandler:(void (^)(NSError *))arg1;	// IMP=0x0010000000226b60
- (void)readDocumentWith:(_TtC7CoreIDV30XPCMobileDocumentReaderRequest *)arg1 engagementType:(_TtC7CoreIDV43XPCMobileDocumentReaderDeviceEngagementType *)arg2 completionHandler:(void (^)(_TtC7CoreIDV31XPCMobileDocumentReaderResponse *, NSError *))arg3;	// IMP=0x00100000002254e0
- (void)canRequestDocument:(_TtC7CoreIDV30XPCMobileDocumentReaderRequest *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x0010000000223bc0
- (MISSING_TYPE *)merchantFor:completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x00100000002221e0
- (void)prepareWith:(_TtC7CoreIDV36XPCMobileDocumentReaderConfiguration *)arg1 completionHandler:(void (^)(_TtC7CoreIDV44XPCMobileDocumentReaderConfigurationResponse *, NSError *))arg2;	// IMP=0x00100000002207c0
- (void)readerInstanceIdentifierWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;	// IMP=0x001000000021ee70
- (void)registerAuditToken:(_TtC7CoreIDV13XPCAuditToken *)arg1 completionHandler:(void (^)(NSError *))arg2;	// IMP=0x001000000021d8b0
- (void)isSupported:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c810

@end
