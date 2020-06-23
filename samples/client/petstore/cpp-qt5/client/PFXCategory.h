/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PFXCategory.h
 *
 * A category for a pet
 */

#ifndef PFXCategory_H
#define PFXCategory_H

#include <QJsonObject>

#include <QString>

#include "PFXEnum.h"
#include "PFXObject.h"

namespace test_namespace {

class PFXCategory : public PFXObject {
public:
    PFXCategory();
    PFXCategory(QString json);
    ~PFXCategory() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint64 getId() const;
    void setId(const qint64 &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QString getName() const;
    void setName(const QString &name);
    bool is_name_Set() const;
    bool is_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint64 id;
    bool m_id_isSet;
    bool m_id_isValid;

    QString name;
    bool m_name_isSet;
    bool m_name_isValid;
};

} // namespace test_namespace

Q_DECLARE_METATYPE(test_namespace::PFXCategory)

#endif // PFXCategory_H
