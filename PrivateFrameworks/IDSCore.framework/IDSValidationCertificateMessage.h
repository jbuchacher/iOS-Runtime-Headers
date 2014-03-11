/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {
    NSData *_pushToken;
    NSData *_responseCertificateData;
}

@property(copy) NSData * pushToken;
@property(copy) NSData * responseCertificateData;

- (id)additionalMessageHeaders;
- (id)bagKey;
- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)init;
- (id)messageBody;
- (id)pushToken;
- (id)requiredKeys;
- (id)responseCertificateData;
- (int)responseCommand;
- (void)setPushToken:(id)arg1;
- (void)setResponseCertificateData:(id)arg1;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end