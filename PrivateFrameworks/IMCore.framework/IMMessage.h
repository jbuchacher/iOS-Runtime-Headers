/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMHandle, NSString, NSArray, NSDate, NSError, NSAttributedString;



@interface IMMessage : NSObject 
{
    IMHandle *_sender;
    IMHandle *_subject;
    NSAttributedString *_text;
    NSString *_plainBody;
    NSDate *_time;
    NSString *_guid;
    NSArray *_fileTransferGUIDs;
    NSError *_error;
    NSUInteger _flags;
    unsigned int _isInvitationMessage : 1;
}

+ (id)instantMessageWithText:(id)arg1 flags:(NSUInteger)arg2;
+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(NSUInteger)arg4;

- (void)setError:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;
- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;
- (id)plainBody;
- (id)senderName;
- (id)summaryString;
- (void)setFileTransferGUIDs:(id)arg1;
- (id)fileTransferGUIDs;
- (BOOL)finished;
- (BOOL)hasInlineAttachments;
- (id)inlineAttachmentAttributesArray;
- (BOOL)isEmote;
- (BOOL)fromMe;
- (BOOL)isAutoReply;
- (void)setIsAddressedToMe:(BOOL)arg1;
- (BOOL)isAddressedToMe;
- (BOOL)isAlert;
- (void)setIsInvitationMessage:(BOOL)arg1;
- (BOOL)isInvitationMessage;
- (NSUInteger)flags;
- (void)setText:(id)arg1;
- (id)time;
- (id)text;
- (BOOL)isDelayed;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)description;
- (void)setSecurityLevel:(NSInteger)arg1;
- (NSInteger)securityLevel;
- (void)setFlags:(NSUInteger)arg1;
- (id)subject;
- (id)guid;
- (id)error;
- (id)sender;

@end